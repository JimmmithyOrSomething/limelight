---
title: "Limelight EEG/EMG"
author: "Eamonn O'Brien"
description: "This project is a wearable EEG and EMG that I'm building from scratch. Most devices like this are very expensive so I wanted to see if I can make one device for both EEG and EMG signals and use it to get wave data or prefore actions (ex: light turns on when you tense your arm)"
created_at: "2025-05-26"
---


total time spent: 38.75h


(Most of these logs are writen late at night so please disregarde my spelling)

July 12th and 13th:
I worked on finishing my github and getting all my files in order before I submit it. Then I found the parts I need to make this change between an EEG and an EMG. I need to buy them in bluck so I have to order 520 in total hopfully I can have them ship with the PCB to save on shipping but I'm not sure if I can. Finaly I made some cosmetic upgrades.

<img width="1603" height="692" alt="Screenshot 2025-07-13 173125" src="https://github.com/user-attachments/assets/c0167811-f9d6-4eed-b282-dc1a09852fff" />


total time 1.5h





July 9th:
Even better day

Today I continued on my pcb the whole time. I first changed the shape to a thin rectangle about 1cmX10cm. Then I got all the parts in place and started routing it. This took a really long time because I kept stoping to change things that didn't work. I also needed extra thick wires for the signal carrying parts as well as the fact that this was my first time doing a copper pour, which wasn't that bad but I did keep cutting it off by mistake. This was also my first time doing a project that needed sheilding for the EEG signals which was a little complecated but I understand it now. Im mostly done with the PCB now I just need to review it and make a few more edits next time.

<img width="1860" height="799" alt="image" src="https://github.com/user-attachments/assets/82887a9d-c9e7-4d6e-96e3-0927c71d9d9e" />


Total time spent 4.5h


July 8th:
Really good day today

I finally finished my schematic, I looked it over a bunch then got started on my PCB, I wasn't really sure what shape I was going for at first so I just started with a fairly square rectangle. This is seeming to be a fairly complicated PCB with all the things I need to consider like shield and not hurting signals. at the end of my working time I realised it was much smarter to make a long thin rectangle than what I had so Ill make that change tomorrow.

<img width="1443" height="853" alt="image" src="https://github.com/user-attachments/assets/67db6c10-5c06-44b0-8138-e45782c4ae51" />



total time spent: 3h
July 6th:

I also didn't have much time today but i got some stuff done, I cleaned up my PCB connections and eddited the decoupling set up so it will hopefully work better.

total time spent 30m
![Screenshot 2025-07-06 142955](https://github.com/user-attachments/assets/1e5d802f-c44a-4b46-b713-a0d90d31dcc7)


july 5th: 
I didn't have too much time today but I went back into my PCB and got some work done on it making a few small changes and checking it over I'm getting really close to done.

total time spent 1h;
July 3rd:
I didn't have a ton of time today, but I made the set of arms that attaches. The second set of active electrodes onto the sides of the top of the head. This wasn't very difficult. It was about the same as making the other arms. I need a little bit of tweaking once I get the actual parts because I'm not 100% sure on the sizes and tolerances. I think it went pretty well and I think that this part will work fine.

Total time spent one hour.


July 1st: 
I didn't have much free time today but I did spend some time making another set of arms that will hold the GND electrodes on the glasses, I used 3d sketch in fusion to do that and made is to the arms curve inward towards the person's forehead, I still need to make one more set which I will do next time.

total time spent 45m

June 30th:

So I had a pretty good day today I had to make some changes to my initial glasses design some parts were way too sharp so I gave them a more rounded design I had to design a way to attach the arms of the glasses to the actual frames which I think went pretty well initially I was going to build in a hinge they could collapse but that just seemed inefficient considering they're not a real pair of glasses. I printed out the test version for them and they are more comfortable to wear except for the fact that I used a different type of build plate adhesion which does make them more rough so I'm going to have to figure out something for that eventually but for now it's not a big deal. I also got started on putting in electrode plates I did the back ones that are going to attach behind the ear and I'm going to do the other two most likely tomorrow. In all I think it was a pretty successful day.


![WIN_20250701_15_15_57_Pro](https://github.com/user-attachments/assets/300e9c50-fe27-458d-9f45-da989568d0ba)


total time spent: 3h

June 28th:
Today I chose to take a break from working on my pcb and I started on my cad render i'm building a pair of glasses that will hold all the electrodes I started by making a 3D model of my head and then I used an I calibrated image to scale it to the right point. Then I built a pair of glasses around it and printed them out this was just an initial test to see if I could do that all and it came up pretty well it took me longer than expected because I ran into some scaling issues along the way but ultimately I got it next time I'm planning on adding the electrode pads into the right place and I'm going to print another version I need to make the your attachments a little smaller and make it a little more rounded so it's not jabbing me in the nose but I did get pretty close and I'm pretty happy with it.

total time spent: 3.5h

![Screenshot 2025-06-27 180422](https://github.com/user-attachments/assets/8354d242-62d0-4918-abd0-a136885cc500)

June 26th:
Today I didnt do too much I went into my pcb and continued working on it trying to get it to the best of my confidence that it will work I definitely have some more viewing to do but I really feel like I'm getting close with this.

Total time spent: 1h

June 25th:
so today went pretty well i'm starting to feel more confident in my amp circuit much more confident than yesterday I started working on taking out all the pieces that will make it specific to either the EEG or EMG this way the board can use both types of readings I also took out the rails that I was originally gonna have the board plugin to because now that I'm gonna have five boards they can't all plug into the rails at once so I'm just gonna wire from the board into the ESP directly. I started trying to make a digital simulation for my circuit but kind of gave up halfway through it wasn't really going very well I haven't decided if I'll go back to it or not at this point I guess I'll see how the next few days go for tomorrow i'm going to remove all the specific resistors and capacitors that will hurt the performance of either the EEG or EMG and replace them with through holes but I think I'm getting pretty close to being able to start ordering parts.

Total Time spent: 3h


<img width="709" alt="image" src="https://github.com/user-attachments/assets/19877bb1-566d-4d98-b1e2-382db3e39c74" />

june 24th:

so today was the first time I've worked in a while as you can see by the date it's been probably 3 weeks I've had a ton going on with school so I haven't been able to get too much done. But today I continued working on my amplifier circuit and it honestly didn't go too well it didn't go horribly but I'm just I got kind of lost part way through and I'm sort of working to get back in the rhythm of really being on top of everything that's going on but not entirely sure how it's going to go up till now. I've also made the decision to make one modifiable circuit that I can use  different versions of for both the brain wave readers and the muscle signal readers which will allow me to obviously order less but it does make the circuit more complicated so I'm going to have to go back and take out a bunch of the resistors and instead add in SMD pads which I can then solder the right resistors and capacitors directly onto so make it a little more complicated but ultimately make it more efficient in the end. I did just send a request into the slack chat for someone to take a look at my circuit so that way I can feel a little more confident in it before it's time to finalize an order. Also my ESP 32 board started working again I'm not exactly sure what the problem is but my connections must much more stable so I'm gonna go with that for now.  

![Screenshot 2025-06-08 135718](https://github.com/user-attachments/assets/ad753169-5c44-4697-8d8c-6c95e2ccb8d4)
Total time spent: 5h


June 1s:
Today I finished my fake brain and confirmed my choice to intergrate muscles, then i started on the PCB and got a bunch done it went farily smooth but not to much happen that I need to report, It will definetly need a lot more work but I got a fair bit done. I really want to write more but I don't have much to say.

Total time spent: 3h


May 31st:
So today i started to work on my simulated brain to get frimware working and my ESP 32 won't work, I'm working on fixing it or getting another but for now I'm using my nano 33 ble. 
I got to work and got the brain working to send changes in voltage back from the potentimeters(picutred below). Then I got started on my FFT which I was really dreading but it ended up not being as bad as I thought althought I spent probably 3 hours on it. Then I started working on how I'll read the data as of the time I'm writing this it's gone ok but I need to do a lot more work before it's readable, I'll probably put some more time into it in a little bit.

Ok, now I've done some more work and integrated both of my pots into the code as well as allowing it figure out what state the brain is in. for now I'm just avg the values between the two pots then running the FFT on both of them but I might change this after I can acutaly get the parts. 

I've also started to think about adding in muscle controle that can detect tensing of muscles beucase I need to buy the electrodes in bulk anyway so adding a little more to the PCB to allow for much more functionality will deffinetly be woth it.

I don't really have a good way to test the code becase pots are way to stable so the data isn't very resposive to the code but once I get electrodes and amps I can fine tune it.

I'm going to start designing a PCB soon but first I need to figure out how the brain ports will work vs how the muscle ports will work
![IMG_1279](https://github.com/user-attachments/assets/1a2e2176-7881-4ac7-9307-4367601c1d9b)


Total time spent: 6h


May 30th:
Today I started doing more research into the FFT to be able to interprate my data into something that I can actualy work with. (my journal for today got deleted so im just going to sum it up)

I was going to use an ESP MCU for this project but then I relised that it would be way more money then I need to spend on this if I allready had a dev board so I'll stick with this for now plus this will be much more flexable to work with.

I looked into what electodes i'll need because I've never worked with them before, I have a few diffrent way I caan go about this but nothing set in stone yet.

I started to build a fake brain for the esp 32 to look at insted of an acutal brain for now so I can make a test version of my firmware and then upgrade when I get the rest of the parts.
I can't get my ESP to connect well and I have spent 2 hours trying to get this to work.

Total time spent: 2.5h
May 27 - 28th:
(please ignore spelling I'm tired)
I was sick for these two days so I can't really expect to get much done but I did start some research on how this whole thing will work and how I need to process the data. I know that becuase I'm going to be getting a bunch of 12 bit values from the sensors I need an FFT to be able to understand what the data means then I can convert it into Hz which I can work with. (I also thought about looking into some ML beucase I need to be able to recognise patterns but I'll probably wait for V2 to do that with a more powerfull MCU and a few other upgrades) 


Total time spent: 1.5h
May 26th:
Today I realised that this project won't work beucase I've been looking at the physics all wrong and if I really wanted to have a chance at this I would need alot more money and a full on lab, neither of which I have. 

But I also came up with a new idea so YAY :) . Basicaly my new idea is part one of a two part plan I'm hoping to make both parts durring Highway but that might not happen so both parts are useable seprately. My idea is a pair of glasses hooked up to EEG pads connected to a PCB with something like an ESP 32 processor running some clever math to hopefully be able to tell what state the users brain is in. (I do understand that I won't be getting very acurate readings but this is just the orignal version of something I'm hopeing to make a more complex version of in the years to come, I already have ideas of how to make this much more accurate but I'm keeping it simple for V1) 

The formfactor for these is going to hopefully be a pair of glasses with a few sensor pads on them and I think they will be able to serve a bunch of diffrent perposes like reminding the user if they stop paying attention (which happens to me when I'm tired). But mostly these are going to be a learing expierance and hopefully a really cool project. 

Total time spent: 2h


