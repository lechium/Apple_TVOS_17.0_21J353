//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject
{
    NSArray *_requestItems;	// 8 = 0x8
    StoreDownloadQueueResponse *_serverResponse;	// 16 = 0x10
}

@property(retain, nonatomic) StoreDownloadQueueResponse *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void)setServerResponseWithError:(id)arg1;	// IMP=0x001000000018eaf5
- (void)dealloc;	// IMP=0x001000000018eaab

@end
