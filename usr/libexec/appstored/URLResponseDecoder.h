//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLResponseDecoder.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface URLResponseDecoder : AMSURLResponseDecoder
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006afa1
- (id)resultFromResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006ac72
- (id)init;	// IMP=0x001000000006a997

@end
