//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PSIGroupResult;

@protocol PSIGroupResultDelegate <NSObject>
- (void)group:(PSIGroupResult *)arg1 fetchOwningContentString:(_Bool)arg2 assetIdRange:(struct _NSRange)arg3 collectionIdRange:(struct _NSRange)arg4 completionHandler:(void (^)(NSString *, NSArray *, NSArray *))arg5;
@end

