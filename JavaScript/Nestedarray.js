const employee = [

    [ 'John' ,  90000,  'July 1, 2010'],
    
    ['David' , 75000, 'August 15, 2009'],
    
    [ 'Ana' ,  80000, 'December 12, 2011']
    
    ];
  
    function data(arr) {
      let employeedata = [];
      for (let i=0; i<arr.length; i++){
        Array.isArray(arr[i])
        ? employeedata = employeedata.concat(data(arr[i]))
        : employeedata.push(arr[i]);
      }
      return employeedata;
    }

    console.log(
      data(employee)
        )