//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol IDSServerDesiredMaterialSet <NSObject>
@property(readonly) unsigned long long forParticipantID;
@property(readonly) int type;
- (_Bool)requireSignature;
- (NSDictionary *)materialDataByID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@end

