//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServiceRequester.h>

@interface GEOImageServiceServerRequester : GEOServiceRequester
{
}

+ (id)sharedRequester;	// IMP=0x0020000000032153
- (void)cancelSimpleImageServiceRequest:(id)arg1;	// IMP=0x00400000000323dd
- (void)startSimpleImageServiceRequest:(id)arg1 auditToken:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00100000000321a8

@end
