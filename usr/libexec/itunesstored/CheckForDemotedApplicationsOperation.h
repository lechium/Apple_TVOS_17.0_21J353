//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface CheckForDemotedApplicationsOperation : ISOperation
{
    _Bool _hasDemotedApplications;	// 91 = 0x5b
}

@property(readonly) _Bool hasDemotedApplications; // @synthesize hasDemotedApplications=_hasDemotedApplications;
- (void)run;	// IMP=0x00100000001a4cf5
- (id)init;	// IMP=0x00100000001a4cab

@end
