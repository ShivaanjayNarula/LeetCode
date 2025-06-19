class Solution {
    func mincostTickets(_ days: [Int], _ costs: [Int]) -> Int {
        let lastDay = days.last!
         var dp = Array(repeating: 0 ,count: lastDay+1)
         var travelDays = Set(days)
         for day in 1...lastDay{
            if !travelDays.contains(day){
                dp[day]=dp[day-1]
            }else{
                let const1Day=dp[max(0, day-1)]+costs[0]
                let const7Day=dp[max(0, day-7)]+costs[1]
                let const30Day=dp[max(0, day-30)]+costs[2]
                dp[day]=min(const1Day, const7Day ,const30Day)
                
            }
         }
         return dp [lastDay]
    }
}
