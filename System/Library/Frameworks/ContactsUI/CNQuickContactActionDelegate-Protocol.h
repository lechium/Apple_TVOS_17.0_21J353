//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNQuickContactAction, UIViewController;

@protocol CNQuickContactActionDelegate <NSObject>
- (void)contactAction:(CNQuickContactAction *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contactActionDidUpdate:(CNQuickContactAction *)arg1;
@end

