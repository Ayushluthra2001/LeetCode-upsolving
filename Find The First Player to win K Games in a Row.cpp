class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
          int n = skills.size();
    
    if (k >= n - 1) {
       
        int max_skill_index = 0;
        for (int i = 1; i < n; i++) {
            if (skills[i] > skills[max_skill_index]) {
                max_skill_index = i;
            }
        }
        return max_skill_index;
    }
    
    deque<int> queue;
    for (int i = 0; i < n; i++) {
        queue.push_back(i);
    }

    int current_winner = queue.front();
    queue.pop_front();
    int win_streak = 0;

    while (win_streak < k) {
        int challenger = queue.front();
        queue.pop_front();

        if (skills[current_winner] > skills[challenger]) {
            win_streak++;
            queue.push_back(challenger);
        } else {
            win_streak = 1;
            queue.push_back(current_winner);
            current_winner = challenger;
        }
    }

    return current_winner;
    }
};
