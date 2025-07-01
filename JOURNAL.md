(Most of these logs are writen late at night so please disregarde my spelling)
June 30th:




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

IGNORE EVERYTHING FROM HERE DOWN///////////////////////////////////////////////////////////////////////////////////////////
May 25th:
(this is going to have so many misspellings I'm really tired)
So I got a lot done today, I worked on my code a bunch.  

I moved all my code so I can work on it in VS code beucase Tinker cads in built IDE is not. good

The first thing I did was I wrote the code that does a much better job a detecting changes in the drinks to get more accurate and faster results. After this I programed a strobing function for the ring light I'm using which will hopfully be more noticable (Still unsure if this will work well on the real light but works fine online for now). Then I started to put in a button for power controle but then I thought that it was smarter to just wire the button directly into the power line on the PCB so I'm skiping this for now. Then I looked into how I'll go about getting the battery level information. I added a feature where the ring light could show power levels via lighting up more lights when the battery level is higher.(This is working great in my simulation but beucase I don't have acual simulateable battires I'm using a potentiometer and a math formula)

I also looked into what MCU I'm going to use and I think that an ESP 32 is going to be the choice. And I looked into how to safely work the battery beucase this is the first PCB i've made with a battery  and I'd really like not to fry it.

I'm tired... time to watch community

May 23:
This was an important day, today I fully commited to this project despite having some doubts

I built some more of the layout as well as making some super basic code to run, this is nothing special yet right now all the code can do is turn the light red when it detects a large voltage change, the formula will need a huge update soon to make it more reliable but it's a good start. I still can't get my ringlight to change on command but it's probably a dumb issue. I really need to clean up my layout, even digitaly my desk is a mess(that sounded really dumb, but I'm not taking it out). I didn't really get too much else done today.

May 22st:
I started working on a design beucase I don't have all the parts I'll need I'm going to run this from an online simulator. The only one I can reliably get to work is... Tinkercad... here we are again, I keep saying I'm done but no I never am (It only supports arduino boards but I can make it work). So I started making some basic designs with an uno board and a neopixle ring. Tinkercad also doesn't support the sensor I need so I'm just using a potentiometer so simulate it. I'll need to workout if this will change anything when I stitch to the actual sensor but that's a problem for later.

May 17th-20th:
This was before I actualy started building anything but at this point I was doing research on how this should work and figuring out how I'll be able to test it without real drugs.


May 16th ish:
This isn't going to be a huge entry because this was before I started building anything but I will talk about what my idea is and how it came to be. So this started when I was stitting in health class and my teacher was talking about how people need to be carefull at parties and in public beucase your drink can be druged. I stared to wonder why there wasn't a device that could detect this so I started some research. I decided that this could be a good idea and a few days later I saw the highway program so I decided that this was a good time to get a prototype made. 

Here are the basics of my plan. the thing will have a shell (hopefully some kind of stainless steal) that will be maybe a little more than a sqare inch. It will run on a pcb using an ESP 32 MCU and a 3 electrode electrochemical sensor to detect the changing electron state (drink has been spiked). When it thinks the drink has been spiked it will light up an led ring red, and im thinking of making an app that can be notified via BLE and can also inform the user on when to switch sensor tips.

all I had at this point
