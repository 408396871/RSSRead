//
//  SMViewController.h
//  RSSRead
//
//  Created by ming on 14-3-3.
//  Copyright (c) 2014年 starming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMRSSModel.h"
#import "SMAddRSSViewController.h"
#import "SMRSSListViewController.h"

@interface SMViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,MWFeedParserDelegate,SMRSSModelDelegate,SMRSSListViewContrllerDelegate,SMAddRSSViewControllerDelegate>
//-(void)fetchWithCompletionHandler:(void(^)(UIBackgroundFetchResult))completionHandler;

@end
