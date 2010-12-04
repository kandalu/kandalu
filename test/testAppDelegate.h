//
//  testAppDelegate.h
//  test
//
//  Created by MB6 on 04/12/10.
//  Copyright 2010 Kandalu Software Ltd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface testAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
