//
//  AppDelegate.h
//  FeatureDetection
//
//  Created by Nick O'Neill on 4/15/12.
//  Copyright (c) 2012 Launch Apps. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSView *view;
@property (assign) IBOutlet NSScrollView *scrollContent;

- (void)showImage:(float*)imageArray forWidth:(int)width andHeight:(int)height;

@end
