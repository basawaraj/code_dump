int majorityElement(int a[], int size)
    {
        unordered_map<int ,int>map;
            
        for(int i = 0;i<size;i++)
            map[a[i]]++;
        
        for(auto i:map)
            if(i.second>(size/2))
                return i.first;
            
        return -1;
        
    } // aproach 2



    int majorityElement(int a[], int size)
   {
       // your code here
       int count=1;
       int majority=a[0];
       for(int i=1;i<size;i++){
           if(a[i]==majority) count++;
           else count--;
           if(count==0){
               count=1; 
               majority=a[i];}
       }
       count=0;
       for(int i=0;i<size;i++){
           if(a[i]==majority) count++;
       }
       if(count>size/2) return majority;
       return -1;
   } // aproach 1