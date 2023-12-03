const express = require('express');
var bodyparser = require("body-parser");
const app = express();
const port = 3001

app.use(bodyparser.json());
function CalculateSum(counter){
    var sum = 0;
    for(let i = 1; i<=counter;i++){
        sum = sum +i;
    }

    return sum;
}

function CalculateMul(counter){
  var ans = 1;
  for(let i = 1; i<=counter;i++){
      ans = ans * i;
  }

  return ans;
}
/*function middleware1(req , res, next){
  console.log("From FromInside Middleware " + req.headers.counter);
  next();
}
 app.use (middleware1);
*/
app.post('/Sum', (req, res) => {
  var counter = req.body.counter;
  var calculatedsum = CalculateSum(counter).toString();
  console.log(req.body);
  res.send(calculatedsum);
})

app.get('/summ', (req , res) => {
  var counter = req.query.counter;
  var calculatedsum = CalculateSum(counter).toString();
  var CalculatedMul = CalculateMul(counter).toString();

  var answerobject = {
    sum : calculatedsum , 
    mul : CalculatedMul
  }

  res.status(200).send(answerobject);
})


app.get('/' , GivePage);

function GivePage(req , res){
  res.send(`<head>
     <title>Hello from Site</title>
     </head>
  
    <body>
      <b>
          Hello World
      </b>
    </body>`)
}

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
