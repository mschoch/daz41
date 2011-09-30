//
//  daz41AppDelegate.h
//  daz41
//
//  Created by Marty Schoch on 9/27/11.
//  Copyright 2011 Hexedit Reality, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Couchbase/CouchbaseMobile.h>

@class daz41ViewController;

@interface daz41AppDelegate : NSObject <UIApplicationDelegate, CouchbaseDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet daz41ViewController *viewController;

@end
