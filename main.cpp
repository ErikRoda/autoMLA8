/*
Auto MLA 8
By: Erik Rodabaugh
Website: www.ErikRodabaugh.com
Copyright (C) 2016 Erik Rodabaugh

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

// Setup.
#include <iostream>
#include <unistd.h> // Has Sleep.
using namespace std;

// Variables.
string A, Ts, Tc, Oc0, Oc1, Oc2, Oc3, V, N, P, Pd, L, Da, Final, input;
int UIquit = 0;

int main()
{
  // Display the title.
  cout << "Auto MLA 8" << endl << "By: Erik Rodabaugh" << endl << "Website: www.ErikRodabaugh.com" << endl << "------------------------------" << endl << endl;

  // Display use info.
  cout << "If something is not acceptable, type 'N/A'" << endl;

  while(UIquit==0){
    // Ask for the author's name.
    cout << "What is the author's name. Format: Last, First" << endl;
    getline(cin, A);
    cout << endl;

    // Ask for the title of the source.
    cout << "What is the title of the source?" << endl;
    getline(cin, Ts);
    cout << endl;

    // Ask for the Title of the container.
    cout << "What is the title of the container. (E.g. The website title)" << endl;
    getline(cin, Tc);
    cout << endl;

    // Ask for the names of the other contributors.
    cout << "List all of the contributors, one at a time. 'N/A' for none." << endl;
    getline(cin, Oc0);
    getline(cin, Oc1);
    getline(cin, Oc2);
    getline(cin, Oc3);
    cout << endl;

    // Ask for the version.
    cout << "What is version? 'N/A' for none." << endl;
    getline(cin, V);
    cout << endl;

    // Ask for the number.
    cout << "What is the number? 'N/A' for none." << endl;
    getline(cin, N);
    cout << endl;

    // Ask for the publisher.
    cout << "What is the publisher? 'N/A' for none." << endl;
    getline(cin, P);
    cout << endl;

    // Ask for the publication date.
    cout << "What is the publication date? 'N/A' for none. (Format: 22 Aug 2016)" << endl;
    getline(cin, Pd);
    cout << endl;

    // Ask for the location.
    cout << "What is the location? (The place of publication/URL)" << endl;
    getline(cin, L);
    cout << endl << endl;

    // Ask for the date accessed.
    cout << "When did you access this? (Format: 22 Aug 2016)" << endl;
    getline(cin, Da);
    cout << endl << endl;

    // Format
    if(A=="N/A"){
      // Do Nothing
    }else{
    Final = A + ". ";
    }

    if(Ts=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Ts + ". ";
    }

    if(Tc=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Tc + ", ";
    }

    if(Oc0=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Oc0 + ", ";
    }

    if(Oc1=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Oc1 + ", ";
    }

    if(Oc2=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Oc2 + ", ";
    }

    if(Oc3=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Oc3 + ", ";
    }

    if(V=="N/A"){
      // Do Nothing
    }else{
      Final = Final + V + ", ";
    }

    if(N=="N/A"){
      // Do Nothing
    }else{
      Final = Final + N + ", ";
    }

    if(P=="N/A"){
      // Do Nothing
    }else{
      Final = Final + P + ", ";
    }

    if(Pd=="N/A"){
      // Do Nothing
    }else{
      Final = Final + Pd + ", ";
    }

    if(L=="N/A"){
      // Do Nothing
    }else{
      Final = Final + L + ". ";
    }

    if(Da=="N/A"){
      // Do Nothing
    }else{
      Final = Final + "Accessed " + Da + ".";
    }

    cout << Final << endl << endl;
    // Ask the user if you would like to quit.
    cout << "Quit? (Y/N)" << endl;
    getline(cin, input);
    if(input == "Y"){
      UIquit = 1;
    }
    if(input == "y"){
      UIquit = 1;
    }
  }
  cout << endl << "For more about MLA, please see: https://owl.english.purdue.edu/owl/resource/747/01/";
}
