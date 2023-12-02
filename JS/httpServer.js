const express = require('express');
var bodyparser = require("body-parser");
const app = express()
const port = 3001

app.use(bodyparser.json());
function CalculateSum(counter){
    var sum = 0;
    for(let i = 1; i<=counter;i++){
        sum = sum +i;
    }

    return sum;
}
/* function middleware1(req , res, next){
  console.log("From FromInside Middleware " + req.headers.counter);
  res.send("Error inside middleware");
}
*/
// app.use (middleware1);

app.post('/Sum', (req, res) => {
  var counter = req.body.counter;
  var calculatedsum = CalculateSum(counter).toString();
  console.log(req.body);
  res.send(calculatedsum);
})
app.post('/SumOf', (req, res) => {
    var calculatedsum = CalculateSum(100).toString();
    res.send(calculatedsum);
  })

app.put('/HW', (req,res) => {
  res.send("Hello World")
})


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
