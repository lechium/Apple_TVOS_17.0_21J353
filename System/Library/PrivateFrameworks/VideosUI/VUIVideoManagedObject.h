//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIVideoManagedObject : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingExpirationDate;	// IMP=0x00800000000b4a88
+ (id)keyPathsForValuesAffectingLocalPlaybackURL;	// IMP=0x00800000000b4a68
@property(retain, nonatomic) NSDictionary *redownloadProductResponseDictionary;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSArray *playbackModes;
@property(readonly, nonatomic) NSDictionary *mediaMetrics;
@property(readonly, nonatomic) NSDictionary *additionalFPSRequestParams;
@property(copy, nonatomic) NSURL *localPlaybackURL; // @dynamic localPlaybackURL;

// Remaining properties
@property(copy, nonatomic) NSString *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSData *additionalFPSRequestParamsJSONData; // @dynamic additionalFPSRequestParamsJSONData;
@property(nonatomic) _Bool allowsCellular; // @dynamic allowsCellular;
@property(nonatomic) _Bool allowsManualRenewal; // @dynamic allowsManualRenewal;
@property(copy, nonatomic) NSDate *availabilityEndDate; // @dynamic availabilityEndDate;
@property(copy, nonatomic) NSNumber *bookmarkTime; // @dynamic bookmarkTime;
@property(copy, nonatomic) NSDate *bookmarkTimeStamp; // @dynamic bookmarkTimeStamp;
@property(copy, nonatomic) NSString *brandID; // @dynamic brandID;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(copy, nonatomic) NSString *buyParams; // @dynamic buyParams;
@property(copy, nonatomic) NSString *canonicalID; // @dynamic canonicalID;
@property(copy, nonatomic) NSString *contentRatingDomain; // @dynamic contentRatingDomain;
@property(copy, nonatomic) NSNumber *contentRatingRank; // @dynamic contentRatingRank;
@property(copy, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(nonatomic) _Bool downloadFailedDueToError; // @dynamic downloadFailedDueToError;
@property(retain, nonatomic) NSData *downloadQOSMetricsJSONData; // @dynamic downloadQOSMetricsJSONData;
@property(nonatomic) long long downloadState; // @dynamic downloadState;
@property(copy, nonatomic) NSNumber *downloadTaskIdentifier; // @dynamic downloadTaskIdentifier;
@property(copy, nonatomic) NSURL *downloadURL; // @dynamic downloadURL;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(copy, nonatomic) NSNumber *duration; // @dynamic duration;
@property(copy, nonatomic) NSNumber *entitlementType; // @dynamic entitlementType;
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @dynamic fpsCertificateURL;
@property(retain, nonatomic) NSSet *fpsKeyInfo; // @dynamic fpsKeyInfo;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @dynamic fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsNonceURL; // @dynamic fpsNonceURL;
@property(copy, nonatomic) NSNumber *frequencyOfAgeConfirmation; // @dynamic frequencyOfAgeConfirmation;
@property(copy, nonatomic) NSString *genreName; // @dynamic genreName;
@property(nonatomic) _Bool hasExpirationDate; // @dynamic hasExpirationDate;
@property(retain, nonatomic) NSSet *imageInfos; // @dynamic imageInfos;
@property(nonatomic) _Bool isAdultContent; // @dynamic isAdultContent;
@property(copy, nonatomic) NSString *localPlaybackRelativeFilePath; // @dynamic localPlaybackRelativeFilePath;
@property(copy, nonatomic) NSNumber *mainContentRelativeBookmarkTime; // @dynamic mainContentRelativeBookmarkTime;
@property(copy, nonatomic) NSDate *mainContentRelativeBookmarkTimeStamp; // @dynamic mainContentRelativeBookmarkTimeStamp;
@property(nonatomic) _Bool markedAsDeleted; // @dynamic markedAsDeleted;
@property(copy, nonatomic) NSString *mediaDescription; // @dynamic mediaDescription;
@property(retain, nonatomic) NSData *mediaMetricsJSONData; // @dynamic mediaMetricsJSONData;
@property(copy, nonatomic) NSNumber *offlineKeyRenewalPolicy; // @dynamic offlineKeyRenewalPolicy;
@property(retain, nonatomic) NSData *playbackModesJSONData; // @dynamic playbackModesJSONData;
@property(copy, nonatomic) NSURL *playbackURL; // @dynamic playbackURL;
@property(retain, nonatomic) NSData *redownloadProductResponse; // @dynamic redownloadProductResponse;
@property(copy, nonatomic) NSString *referenceID; // @dynamic referenceID;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(copy, nonatomic) NSNumber *rentalID; // @dynamic rentalID;
@property(copy, nonatomic) NSDate *rentalPlaybackStartDate; // @dynamic rentalPlaybackStartDate;
@property(copy, nonatomic) NSNumber *requiredAgeForPlayback; // @dynamic requiredAgeForPlayback;
@property(copy, nonatomic) NSString *rtcServiceIdentifier; // @dynamic rtcServiceIdentifier;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(nonatomic) _Bool shouldMarkAsDeletedAfterCancellationOrFailure; // @dynamic shouldMarkAsDeletedAfterCancellationOrFailure;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSData *vpafMetricsJSONData; // @dynamic vpafMetricsJSONData;

@end

