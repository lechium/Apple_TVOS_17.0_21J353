//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DYEAGLCaptureAPISupport : NSObject
{
}

- (id)diagnosticsTransportEnvironmentVariable;	// IMP=0x00200000000071ec
- (id)transportEnvironmentVariable;	// IMP=0x00100000000071df
- (id)graphicsAPIInfo;	// IMP=0x00100000000070c1
- (id)_createContextInfo:(unsigned long long)arg1;	// IMP=0x0010000000006ee8
- (id)diagnosticsDylibPath;	// IMP=0x0010000000006ebd
- (id)interposeDylibPath;	// IMP=0x0010000000006e92
- (id)initWithAPI:(unsigned int)arg1;	// IMP=0x0010000000006e41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

