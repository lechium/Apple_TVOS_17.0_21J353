//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileInstallation/MILaunchServicesDatabaseGatherer.h>

@interface MIReferenceAwareLSDatabaseGatherer : MILaunchServicesDatabaseGatherer
{
    unsigned int _targetUID;	// 8 = 0x8
}

@property(nonatomic) unsigned int targetUID; // @synthesize targetUID=_targetUID;
- (_Bool)performGatherWithError:(id *)arg1;	// IMP=0x0010000000019a67
- (id)initWithOptions:(unsigned long long)arg1 forTargetUID:(unsigned int)arg2 enumerator:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019a10
- (_Bool)scanExecutableBundle:(id)arg1 inContainer:(id)arg2 forPersona:(id)arg3 withError:(id *)arg4;	// IMP=0x001000000001967b

@end

