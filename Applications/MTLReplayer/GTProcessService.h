//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTProcessInfo, GTServiceProperties;

@interface GTProcessService : NSObject
{
    GTServiceProperties *_serviceProperties;	// 8 = 0x8
    GTProcessInfo *_processInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001e7ae
- (void).cxx_destruct;	// IMP=0x002000000001e9aa
@property(readonly, nonatomic) GTProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) GTServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001e929
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001e84f
- (id)initWithService:(id)arg1 processInfo:(id)arg2;	// IMP=0x001000000001e7b6

@end

