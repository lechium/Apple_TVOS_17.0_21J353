//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeSharingKit/NSObject-Protocol.h>

@class TVHKContributorImageLoadOperation, TVHKContributorImageLoadParams;

@protocol TVHKContributorImageLoadOperationDelegate <NSObject>
- (void)operation:(TVHKContributorImageLoadOperation *)arg1 templateImageURLStringForParams:(TVHKContributorImageLoadParams *)arg2 withCompletionHandler:(void (^)(NSString *, NSError *))arg3;
@end
