//
//  DefinitivoTestsAppDelegate.h
//  DefinitivoTests
//
//  Created by Pablo Sierra on 30/03/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DefinitivoTestsViewController;

@interface DefinitivoTestsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DefinitivoTestsViewController *viewController;

@end
