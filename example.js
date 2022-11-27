let interval = 0;
let sleep = 500

display('Hello World ');

timeout(sleep, interval, () => {
    display('1 ' + new Date().toISOString())
});