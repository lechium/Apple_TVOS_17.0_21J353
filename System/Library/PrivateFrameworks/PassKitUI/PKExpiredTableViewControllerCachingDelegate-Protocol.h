//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, PKPass;

@protocol PKExpiredTableViewControllerCachingDelegate <NSObject>
- (void)prefetchItemsAtIndexPaths:(NSArray *)arg1;
- (_Bool)passExistsWithUniqueIdentifier:(NSString *)arg1;
- (PKPass *)passAtIndexPath:(NSIndexPath *)arg1;
@end
