//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue, VSOptional;

__attribute__((visibility("hidden")))
@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation
{
    NSArray *_unlimitedIdentityProviders;	// 8 = 0x8
    VSOptional *_result;	// 16 = 0x10
    NSOperationQueue *_privateQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a364
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) NSArray *unlimitedIdentityProviders; // @synthesize unlimitedIdentityProviders=_unlimitedIdentityProviders;
- (void)executionDidBegin;	// IMP=0x0000000000039cf1
- (id)init;	// IMP=0x0000000000039c12

@end

