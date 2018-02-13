process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
    var arr = [];
    for(arr_i = 0; arr_i < 6; arr_i++){
       arr[arr_i] = readLine().split(' ');
       arr[arr_i] = arr[arr_i].map(Number);
    }
    
    var xMoviments = [0,0,0,1,2,2,2]
    var yMoviments = [0,1,2,1,0,1,2]
    var maxSum = -325;
    for(i=0; i <= 3; i++){
        for(j=0; j <= 3; j++){
            var currentSum = 0;
            for(m_index = 0; m_index < 7; m_index++){
                currentSum += arr[i + xMoviments[m_index]][j + yMoviments[m_index]];
            }
            if(currentSum > maxSum){
                maxSum = currentSum;
            }
        }
    }
    console.log(maxSum);
}
