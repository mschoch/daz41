//
//  daz41AppDelegate.h
//  daz41
//
//  Created by Marty Schoch on 9/27/11.
//  Copyright 2011 Hexedit Reality, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class daz41ViewController;

@interface daz41AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet daz41ViewController *viewController;

@end
