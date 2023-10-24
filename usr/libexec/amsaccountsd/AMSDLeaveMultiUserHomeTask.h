//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSUUID;

@interface AMSDLeaveMultiUserHomeTask : AMSTask
{
    NSUUID *_homeIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000024700
@property(readonly, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (id)_generateAppProvidedData;	// IMP=0x0010000000024685
- (id)performTask;	// IMP=0x0010000000023efa
- (id)initWithHomeIdentifier:(id)arg1;	// IMP=0x0010000000023e8c

@end
