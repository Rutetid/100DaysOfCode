const express = require('express')
const app = express()
const port = 3001

function CalculateSum(counter){
    var sum = 0;
    for(let i = 1; i<=counter;i++){
        sum = sum +i;
    }

    return sum;
}

app.get('/Sum', (req, res) => {
  var counter = req.query.counter;
  var calculatedsum = CalculateSum(counter).toString();
  res.send(calculatedsum);
})
app.post('/SumOf', (req, res) => {
    var calculatedsum = CalculateSum(100).toString();
    res.send(calculatedsum);
  })


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
