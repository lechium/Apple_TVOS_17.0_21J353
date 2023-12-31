//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCCloudConfigurationWriter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000006d60d
- (_Bool)finalizeCloudConfigurationOutError:(id *)arg1;	// IMP=0x004000000006f143
- (_Bool)saveCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000006e6f6
- (_Bool)_validateDetails:(id)arg1 outReasonWhyInvalid:(id *)arg2;	// IMP=0x001000000006da25
- (_Bool)_isCloudConfigurationAvailableInDEP;	// IMP=0x001000000006d785
- (_Bool)_isCloudConfigurationActuallyAvailable;	// IMP=0x001000000006d75f
- (void)faceTimeSignInAttemptDidFinish;	// IMP=0x001000000006d6aa
- (_Bool)_writeDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x001000000006d692
- (_Bool)_isActivated;	// IMP=0x001000000006d688
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;	// IMP=0x001000000006d662

@end

