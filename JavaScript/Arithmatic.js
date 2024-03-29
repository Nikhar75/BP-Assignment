var express = require('express');
var app = express();
var math=require('mathjs');

        function complex_num_add(Loc1,Loc2) 
        {
            Loc1 ; 
            Loc2 ; 
            var addans= math.add(Loc1,Loc2 ) ;
            if(addans.im === '0') return '' + addans.re;
            if(addans.re === 0) return '' + addans.im + 'i';
            if(addans.im < 0) return '' + addans.re + addans.im + 'i';
            return '' + addans.re + '+' + addans.im + 'i';
        }

        function complex_num_sub(sub1,subs2) 
        {
            sub1;
            sub2;
             var subans= math.subtract(sub1,sub2) ;
           if(subans.im === '0') return '' + subans.re;
           if(subans.re === 0) return '' + subans.im + 'i';
           if(subans.im < 0) return '' + subans.re + subans.im + 'i';
           return '' + subans.re + '+' + subans.im + 'i';
        }
        function complex_num_multiply(mul1,mul2) {
            mul1;
            mul2;
           var mulans= math.multiply(mul1,mul2) ;
           if(mulans.im === '0') return '' + mulans.re;
           if(mulans.re === 0) return '' + mulans.im + 'i';
           if(mulans.im < 0) return '' + mulans.re + mulans.im + 'i';
           return '' + mulans.re + '+' + mulans.im + 'i';
    }

        
        function complex_num_divide(div1, div2) 
        {
            div1;
            div2;
           var divans= math.divide(div1,div2) ;
           if(divans.im === '0') return '' + divans.re;
           if(divans.re === 0) return '' + divans.im + 'i';
           if(divans.im < 0) return '' + divans.re + divans.im + 'i';
           return '' + divans.re + '+' + divans.im + 'i';
        }

 app.get('/add', function (req, res) {
    const addfunc1 = math.complex(3,-8)     
    const addfunc2 = math.complex(2,4)               
        var addoutput=complex_num_add(addfunc1,addfunc2);
        res.send( addoutput );

 }); 
 app.get('/sub', function (req, res) {
    const subfunc1 = math.complex(3,-8)     
    const subfunc2 = math.complex(2,4)                
        var suboutput=complex_num_sub(subfunc1,subfunc2);
        res.send( suboutput );

 });
 app.get('/mul', function (req, res) {
    const multfunc1 = math.complex(3,-8)     
        const multfunc2 = math.complex(2,4)                
        var multoutput=complex_num_multiply(multfunc1,multfunc2);
        res.send( multoutput );

 }); 
 app.get('/div', function (req, res) {
    const dividefunc1 = math.complex(3,-8)    
    const dividefunc2 = math.complex(2,4)             
        var divideoutput=complex_num_divide(dividefunc1,dividefunc2);
        res.send( divideoutput );

 }); 
 var server = app.listen(8081, function () {
    var host = server.address().address
    var port = server.address().port
    console.log("Example app listening at http://%s:%s", host, port)
 })