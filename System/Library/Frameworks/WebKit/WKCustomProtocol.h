//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol
{
    ObjectIdentifierGeneric_de52d110 _customProtocolID;	// 16 = 0x10
    struct RetainPtr<__CFRunLoop *> _initializationRunLoop;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x0060000000147f84
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0060000000147f7b
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000147deb
- (id).cxx_construct;	// IMP=0x0000000000148253
- (void).cxx_destruct;	// IMP=0x000000000014822c
@property(readonly, nonatomic) ObjectIdentifierGeneric_de52d110 customProtocolID; // @synthesize customProtocolID=_customProtocolID;
- (void)stopLoading;	// IMP=0x000000000014817e
- (void)startLoading;	// IMP=0x000000000014809b
@property(readonly, nonatomic) struct __CFRunLoop *initializationRunLoop;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x0000000000147f8c

@end
