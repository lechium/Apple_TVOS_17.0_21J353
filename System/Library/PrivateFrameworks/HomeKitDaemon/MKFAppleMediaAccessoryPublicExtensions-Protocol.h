//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSUUID;
@protocol MKFAnalysisEventBulletinRegistration, MKFHome, MKFUser;

@protocol MKFAppleMediaAccessoryPublicExtensions
+ (NSUUID *)modelIDForParentRelationshipTo:(id <MKFHome>)arg1;
- (id <MKFAnalysisEventBulletinRegistration>)analysisBulletinRegistrationWithDeviceIdsIdentifier:(NSUUID *)arg1 user:(id <MKFUser>)arg2 context:(NSManagedObjectContext *)arg3;
@end

