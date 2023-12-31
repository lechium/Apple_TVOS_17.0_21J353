//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataProvider : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
    CDUnknownBlockType _finishedHandler;	// 16 = 0x10
    CDUnknownBlockType _errorHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012c0b75
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)providerDidCancel;	// IMP=0x00000000012c0b16
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00000000012c0a4a
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000012c09ba
- (void)cancelProviderRequest;	// IMP=0x00000000012c09b4
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;	// IMP=0x00000000012c09ae
- (void)cancelRequest;	// IMP=0x00000000012c099c
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x00000000012c08ab
- (void)requestCompleted;	// IMP=0x00000000012c086a
- (void)dealloc;	// IMP=0x00000000012c0818

@end

