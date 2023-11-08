class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
      int n=players.size();
      int m=trainers.size();
      int i=0,j=0,count=0;
      sort(players.begin(),players.end());
      sort(trainers.begin(),trainers.end());
      while(i<n&&j<m){
          if(players[i]<=trainers[j]){
              i++;
              j++;
              count++;
          }
          else
          j++;
      }
      return count;  
    }
};