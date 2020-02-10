var LiveForm = require("./LiveForm");
var random = require("./random");

module.exports = class Water extends LiveForm{
    constructor(x, y) {
        super(x, y);
        this.index = 5;
        this.multiply = 0;
        this.energy = 10;
     }

    getNewCoordinates(){
        this.directions = [ 
            [this.x - 2, this.y - 2],
            [this.x - 1, this.y - 1],
            [this.x + 1, this.y + 1],
            [this.x + 2, this.y + 2]
        ];
    }
    chooseCell(character) {
        this.getNewCoordinates();
        return super.chooseCell(character);
}
    mul() {

        var newCell = random(this.chooseCell(0));

        if (newCell) {
            waterHashiv++;
            var newWater = new Water(newCell[0], newCell[1], this.index);
            WaterArr.push(newWater);
            matrix[newCell[1]][newCell[0]] = this.index;
            this.energy = 5;
        }
    }



    move() {

    var newCell = random(this.chooseCell(0));

    if (newCell) {
        var newX = newCell[0];
        var newY = newCell[1];

        matrix[this.y][this.x] = 0;
        matrix[newY][newX] = this.index;


        this.y = newY;
        this.x = newX;
        this.energy--;

    }
}


eat() {
        
    var newCell = this.chooseCell(4);
    var newCell1 = this.chooseCell(1);
    var mix = random(newCell.concat(newCell1))

      if(mix) {
          var newX = mix[0];
          var newY = mix[1];

          matrix[this.y][this.x] = 0;
          matrix[newY][newX] = this.index;

          for (var i in FireArr) {
                        if (newX == FireArr[i].x && newY == FireArr[i].y) {
                            FireArr.splice(i, 1);
                            break;
                        }
                     }

        for (var i in grassArr) {
                        if (newX == grassArr[i].x && newY == grassArr[i].y) {
                             grassArr.splice(i, 1);
                            break;
                        }
                     } 


       this.y = newY;
       this.x = newX;
       this.energy += 2;             
                     
        
      }
}



die() {

    if (this.energy < 0) {
        matrix[this.y][this.x] = 0;
        for (var i in WaterArr) {
            if (this.x == WaterArr[i].x && this.y == WaterArr[i].y){
                WaterArr.splice(i, 1);
            break;
            }
        }
    }
}
}