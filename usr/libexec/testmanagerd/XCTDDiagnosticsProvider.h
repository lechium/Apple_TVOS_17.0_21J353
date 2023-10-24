//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XCTDDiagnosticsProvider : NSObject
{
    NSDictionary *_requestTypeRegistry;	// 8 = 0x8
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x002000000001b050
+ (id)logDirectory;	// IMP=0x001000000001aefd
- (void).cxx_destruct;	// IMP=0x002000000001b58d
@property(readonly, copy) NSDictionary *requestTypeRegistry; // @synthesize requestTypeRegistry=_requestTypeRegistry;
- (void)requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b505
- (void)requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b491
- (void)requestLogArchiveForUser:(unsigned int)arg1 startDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b06c
- (id)init;	// IMP=0x001000000001af84
- (id)initWithRequestTypeRegistry:(id)arg1;	// IMP=0x001000000001af07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
