
    SECTION C

ques:1
take input as an array of 100 nos. in an array n[]
now take a pair<int,int>a[101].
assign all a.first to 0 and a.second to each input no.
for(int i=0;i<100;i++)
a[n[i]].first++;
sort(a.begin(),a.end());
cout<<a[100].second;




ques:3
1) Sort all the elements of the input array.
sort(a,a+n);
2) take two  variables i and j to traverse from left and right ends respectively. Initialize i as 0 and j as n-1.
3) s = a[i] + a[j]
4) If s is -ve, then i++
5) If s is +ve, then j–-
6) Keep track of abs min s.
7) Repeat steps 3, 4, 5 and 6 while i < j 
