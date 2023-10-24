//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject
{
    ICUserIdentityProperties *_identityProperties;	// 8 = 0x8
    ICUserIdentityProperties *_delegatedIdentityProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011c3ab
@property(copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // @synthesize delegatedIdentityProperties=_delegatedIdentityProperties;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
- (id)initWithRequestContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011c15d

@end

