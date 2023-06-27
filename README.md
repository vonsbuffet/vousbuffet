# VousBuffet

Here is some code you can use for your Vulkan apps.
We based it on Android, but you can EASILY add some ViB to support any OS.
Or make it into an OS itself?

# It is very simple.

VBC'c has all the cpu and gpu ViB'c you need to program.

All the ViB'c are defined via 4 functions:

Ce : to create it.

Be : to change it for your specific use case.

Vee : to use it.

Pec : to destroy it.

# Look Around

Start by exploring the header files of each ViB.
(VBC'c is the most complicated because it ties everything together. Try starting with a ViB in the Cpu directory?)

(Excluding Vulkan_Wrapper and Jeneral files; which are extra sauce) If you explore the header files you will see a class (which is the ViB)
and each class declares the 4 functions. Member variables in the class are assigned via these functions.
                
The Source files simply define these 4 functions for the class. After looking at a couple, you will see a pattern that will help you learn the rest.

# To Start

Try creating a startup routine that initializes the VBC'c with Be and Vee calls, to create everything you need to get up and running.
</br>Start with an empty float array, and an iterator.
</br>Look through the VBCc->Be branches to decide on what floats you need to make it do what you want.
</br>Do The Same for VBCc->Vee branches. You can add this to a new array or the same one, depending on how you set up your boot routine (static array, read from file, etc.).
</br>You will see a // F or // D or // P next to relevant points where you can order from.

You can also send your VBCc orders via CpuCoul during runtime in the same way. Search through CpuCoul->Vee and find the "vbcc.Vee" call in the VB region. I understand the CpuCoul may seem a bit complicated, but it is essentially a virtual machine that runs simplified assembly language optimized for AI.

Thus change the CpuCoul to be the virtual machine of your choice, and program it. Or learn to use ours, because we know what we're doing.

Very Fun!

# Explore these 4 functions carefully.

They do more than simplify the Vulkan API.

These 4 functions emerged from Von's Buffet's special equation.

The equation helped us do more than create this.

We have studied the equation excessively, and this code is indeed sufficient to do more with the equation.

If you need help unlocking it, please contact us through your spirits.

:)

You still use primitive technology don't you? kk, our contact may use email: TheVoniestMichael@VonsBuffet.ca

# Extra Sauce

For best experience, use Android Studio, or any editor that supports: //region syntax for code folding.

If you want us to add some more ViB to this, eg. for traditional graphics programming, tools and tricks, etc. Contact us through your spirits.

VonsBuffet.ca
"You are the key."
