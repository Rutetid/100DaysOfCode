let count = 0;
function time(){
    count++;
    console.log(count);
    setTimeout(time, 1000);
}

time();