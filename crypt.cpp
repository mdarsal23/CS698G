#include <bits/stdc++.h>
using namespace std;
int main(){
    string c = "vslmqlfxm1866mrfymyo,cfnoylhmkqmfmxljfxgfknlmoczohlcvumfmjqyvlxo pymfchmepwwnoc,meslc jlc cumrsozsmh pkvnlyymc m clmsfymqlvmi x, vvlcamc vmv mjlcvo cmxpj pxymrsozsmf,ovfvlhmvslmjfxovojlme epnfvo cmfchmltzovlhmvslmepknozmjochumldlcmocmvslmocvlxo xm imz cvoclcvyumylfifxoc,mjlcmrlxlmefxvozpnfxnqmltzovlhamjlxzsfcvyumz jj cmyfon xyumzfevfocym imdlyylnyumygoeelxyumk vsm imlpx elmfchmfjlxozfumcfdfnm iiozlxym imfnnmz pcvxolyumfchmvslm, dlxcjlcvym imyldlxfnmyvfvlym cmvslmvr mz cvoclcvyumrlxlmhllenqmocvlxlyvlhmocmvslmjfvvlxami xmy jlmvojlmefyvumdlyylnymsfhmkllcmjlvmkqm\"fcmlc xj pymvsoc,u\"mfmn c,m kblzvumyeochnl-ysfelhum zzfyo cfnnqmes yes xlyzlcvumfchmociocovlnqmnfx,lxmfchmj xlmxfeohmocmovymj dljlcvymvsfcmfmrsfnlamvslmifzvymxlnfvoc,mv mvsoymfeefxovo cm(lcvlxlhmocmdfxo pymn ,-k  gy)mf,xllhmocmj yvmxlyelzvymfymv mvslmysfelm imvslm kblzvm xmzxlfvpxlmocm.plyvo cumvslmpcvoxoc,mxfeohovqm imovymj dljlcvyumovymypxexoyoc,me rlxm imn z j vo cumfchmvslmelzpnofxmnoilmrovsmrsozsmovmylljlhmlch rlhamoimovmrfymfmzlvfzlfcumovmypxefyylhmocmyowlmfnnmvs ylmsovslxv mznfyyoiolhmocmyzolczlamvfgoc,mocv mz cyohlxfvo cmvslmjlfcm im kylxdfvo cymjfhlmfvmhodlxymvojlyuâ€”xlblzvoc,mvslmvojohmlyvojfvlm imvs ylmrs mfyyo,clhmv mvsoym kblzvmfmnlc,vsm imvr mspchxlhmillvuml.pfnnqmrovsmvslmltf,,lxfvlhm eoco cymrsozsmylvmovmh rcmfymfmjonlmocmrohvsmfchmvsxllmocmnlc,vsuâ€”rlmjo,svmifoxnqmz cznphlmvsfvmvsoymjqyvlxo pymkloc,mypxefyylhm,xlfvnqmfnnmhojlcyo cymfhjovvlhmkqmvslmozsvsq n ,oyvym imvslmhfqumoimovmltoyvlhmfvmfnnamfchmvsfvmovmhohmltoyvmrfymfcmpchlcofknlmifzv;mfchumrovsmvsfvmvlchlczqmrsozsmhoye ylymvslmspjfcmjochmocmifd pxm imvslmjfxdlnn pyumrlmzfcmpchlxyvfchmvslmltzovljlcvmex hpzlhmocmvslmlcvoxlmr xnhmkqmvsoymypelxcfvpxfnmfeefxovo camfymv mznfyyoc,movmocmvslmnoyvm imifknlyumvslmohlfmrfym pvm imvslm.plyvo ca";
    //c is a ciphertext with encryption as plaintext xor key and key size is 28 and key is a famous quote
    // map<char, int> freq;
    // for (char ch : c) {
        
    //         freq[ch]++;
        
    // }
    // vector<pair<char, int>> freqVec(freq.begin(), freq.end());
    // sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
    //     return a.second > b.second;
    // });
    // for(int i = 0; i<10; i++) {
    //     cout << freqVec[i].first << " " << freqVec[i].second << endl;
    // }
    // char m = freqVec[0].first; // most frequent character
    unordered_map<char, char> mp;
    mp['m'] = ' ';
    mp['l'] = 'E';
    mp['v'] = 'T';
    mp['r'] = 'W';
    mp['k'] = 'B';
    mp['f'] = 'A';
    mp['y'] = 'S';
    mp[' '] = 'O';
    mp['x'] = 'R';
    mp['s'] = 'H';
    mp['q'] = 'Y';
    mp['o'] = 'I';
    mp['b'] = 'J';
    mp['z'] = 'C';
    mp['n'] = 'L';
    mp['i'] = 'F';
    mp['c'] = 'N';
    mp[','] = 'G';
    mp['h'] = 'D';
    mp['e'] = 'P';
    mp['p'] = 'U';
    mp['j'] = 'M';
    mp['g'] = 'K';
    mp['u'] = ',';
    mp['a'] = '.';
    mp['t'] = 'X';
    mp['d'] = 'V';
    mp['.'] = 'Q';
    mp['w'] = 'Z';
    for(auto& it: c){
        // if(it == m) it = ' ';
        if(mp.find(it) != mp.end()) {
            it = mp[it];
        }
    }

    cout << c;

}