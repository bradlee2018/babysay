//
//  AppDelegate.h
//  babysay
//
//  Created by LeeBrad on 02/06/2017.
//  Copyright © 2017 LeeBrad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

