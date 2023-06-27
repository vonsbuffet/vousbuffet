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
        
The CpuCoul is your cpu thread, and it processes cpu instructions on address space allocated by a CpuBar. It also calls VBC'c Vee function for when you require other ViB'c.
The CpuCoul is the Coul of VBC'c. Write programs for it to execute. It's very easy to set up.

In all ViB'c, wherever you see a // F or // D or // P, it signals information needed by the ViB to do what you want.
Prior to calling the VBC'c Vee function, you instruct the CpuCoul with the pointer to the address location where this information extraction starts from.
Just point the CpuCoul at this start location, follow the branch you want the CpuCoul to follow through the VBC'c Vee function, and add the values you need to this point like you would an array.

I understand the CpuCoul may seem a bit complicated, but it is essentially a virtual machine that runs simplified assembly language optimized for AI.

Very Fun!

# Explore these 4 functions carefully.

They do more than simplify the Vulkan API.

These 4 functions emerged from Von's Buffet's special equation.

The equation helped us do more than create this (which is essentially an operating system framework).

We have studied the equation excessively. And built systems using this code as a starting point.

If you need help unlocking it, please contact us through your spirits.

:)

You still use primitive technology don't you? kk, our contact may use email: TheVoniestMichael@VonsBuffet.ca

# Extra Sauce

For best experience, use Android Studio, or any editor that supports: //region syntax for code folding.

If you want us to add some more ViB to this, eg. for traditional graphics programming, tools and tricks, etc. Contact us through your spirits.

VonsBuffet.ca
"You are the key."
