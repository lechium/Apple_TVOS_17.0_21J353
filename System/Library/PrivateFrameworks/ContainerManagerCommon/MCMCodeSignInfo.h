//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MCMCodeSignInfo : NSObject
{
    unsigned int _platform;	// 8 = 0x8
    NSDictionary *_entitlements;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000012ff7
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000012c52
- (id)initWithURL:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000012be4

@end

