May 25th:
(this is going to have so many misspellings I'm really tired)
So I got a lot done today, I worked on my code a bunch. 

The first thing I did was I wrote the code that does a much better job a detecting changes in the drinks to get more accurate and faster results. After this I programed a strobing function for the ring light I'm using which will hopfully be more noticable (Still unsure if this will work well on the real light but works fine online for now). Then I started to put in a button for power controle but then I thought that it was smarter to just wire the button directly into the power line on the PCB so I'm skiping this for now. Then I looked into how I'll go about getting the battery level information. I added a feature where the ring light could show power levels via lighting up more lights when the battery level is higher.(This is working great in my simulation but beucase I don't have acual simulateable battires I'm using a potentiometer and a math formula)

I also looked into what MCU I'm going to use and I think that an ESP 32 is going to be the choice

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
