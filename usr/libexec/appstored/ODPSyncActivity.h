//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface ODPSyncActivity : NSObject
{
}

- (void)run;	// IMP=0x002000000010c061
@property(readonly) const char *registeredName;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *descriptiveName;
@property(readonly) long long deadline;
@property(readonly) NSObject<OS_xpc_object> *criteria;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

