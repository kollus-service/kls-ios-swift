// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PallyConFPSSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC14PallyConFPSSDK8Customer")
@interface Customer : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class License;
@class NSSet;

@interface Customer (SWIFT_EXTENSION(PallyConFPSSDK))
- (void)addLicenseObject:(License * _Nonnull)value;
- (void)removeLicenseObject:(License * _Nonnull)value;
- (void)addLicense:(NSSet * _Nonnull)values;
- (void)removeLicense:(NSSet * _Nonnull)values;
@end


@interface Customer (SWIFT_EXTENSION(PallyConFPSSDK))
@property (nonatomic, copy) NSData * _Nullable siteCert;
@property (nonatomic, copy) NSString * _Nullable siteId;
@property (nonatomic, strong) NSSet * _Nullable license;
@end


/// A class that receives remote AVURLAssets and downloads them locally.
/// You can create the instance by using (PallyConFPSSDK object).<code>createDownloadTask(url:contentId:optionalId:downloadDelegate:)</code>.
/// You can also cancel current download using the same instance.
SWIFT_CLASS("_TtC14PallyConFPSSDK12DownloadTask") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface DownloadTask : NSObject
/// Starts downloading content.
/// Previous download can be resumed if this method is called after <code>cancel()</code> method without terminating the application.
/// You need to check network availability before calling this method.
- (void)resume;
/// Cancels current content download.
- (void)cancel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// DRM type in token.
/// \code
/// case playReady = 0     /// Microsoft PlayReady DRM
/// case wideVine          /// Google WideVine DRM
/// case fairPlay          /// Apple FairPlay Streaming DRM
///
/// \endcode
typedef SWIFT_ENUM(int8_t, DrmType, closed) {
/// Microsoft PlayReady DRM
  DrmTypePlayReady = 0,
/// Google WideVine DRM
  DrmTypeWideVine = 1,
/// Apple FairPlay Streaming DRM
  DrmTypeFairPlay = 2,
};


SWIFT_CLASS("_TtC14PallyConFPSSDK7License")
@interface License : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface License (SWIFT_EXTENSION(PallyConFPSSDK))
@property (nonatomic, copy) NSString * _Nullable cId;
@property (nonatomic, copy) NSDate * _Nullable downloadDate;
@property (nonatomic, copy) NSDate * _Nullable duration;
@property (nonatomic, copy) NSString * _Nullable licenseType;
@property (nonatomic, copy) NSString * _Nullable optionalId;
@property (nonatomic, copy) NSData * _Nullable persistentKey;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, strong) Customer * _Nullable customer;
@end


/// CustomData string information struct
/// \code
/// public class PallyConCustomDataInfo {
/// /// Contents ID
/// let contentId: String
/// /// User ID
/// let userId: String
/// /// Optional ID
/// let optionalId: String
/// }
///
/// \endcode
SWIFT_CLASS("_TtC14PallyConFPSSDK22PallyConCustomDataInfo")
@interface PallyConCustomDataInfo : NSObject
/// Contents ID
@property (nonatomic, readonly, copy) NSString * _Nonnull contentId;
/// user ID
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
/// Optional ID
@property (nonatomic, readonly, copy) NSString * _Nonnull optionalId;
/// Content Type
@property (nonatomic, readonly) BOOL liveKeyRotation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AVURLAsset;
@class NSValue;

/// The delegate can be used to get callback for starting download, download progress, error and completion.
SWIFT_PROTOCOL("_TtP14PallyConFPSSDK27PallyConFPSDownloadDelegate_")
@protocol PallyConFPSDownloadDelegate <NSObject>
/// It is called when the download begins, and is called several times if the subtitle file of the downloaded content exists.
/// \param contentId ID of the content which is being downloaded.
///
/// \param asset AVURLAsset instance of the content which is being downloaded. You can playback the content while donwloading by using this instance.
///
/// \param subtitleDisplayName if there is subtitle of the content, it is the display name
///
- (void)downloadContent:(NSString * _Nonnull)contentId didStartDownloadWithAsset:(AVURLAsset * _Nonnull)asset subtitleDisplayName:(NSString * _Nonnull)subtitleDisplayName SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Called when an error occurs during download and when canceling download.
/// \param contentId ID of the content which is being downloaded.
///
/// \param error Information of the error
///
- (void)downloadContent:(NSString * _Nonnull)contentId didStopWithError:(NSError * _Nullable)error SWIFT_AVAILABILITY(ios,introduced=10.0);
/// It is called when the content download is complete, and you can check the location of the downloaded content via the location parameter.
/// \param contentId ID of the content which is downloaded
///
/// \param location The location of the downloaded content
///
- (void)downloadContent:(NSString * _Nonnull)contentId didFinishDownloadingTo:(NSURL * _Nonnull)location SWIFT_AVAILABILITY(ios,introduced=10.0);
/// It is called continuously during downloading and you can check progress information as below.
/// \param contentId ID of the content which is being downloaded.
///
/// \param timeRange A CMTimeRange indicating the time range loaded since the last time this method was called.
///
/// \param loadedTimeRanges A NSArray of NSValues of CMTimeRanges indicating all the time ranges loaded by this asset download task.
///
/// \param timeRangeExpectedToLoad A CMTimeRange indicating the single time range that is expected to be loaded when the download is complete.
///
- (void)downloadContent:(NSString * _Nonnull)contentId didLoad:(CMTimeRange)timeRange totalTimeRangesLoaded:(NSArray<NSValue *> * _Nonnull)loadedTimeRanges timeRangeExpectedToLoad:(CMTimeRange)timeRangeExpectedToLoad SWIFT_AVAILABILITY(ios,introduced=10.0);
@end


/// A protocol which can be called during license acquisition.
SWIFT_PROTOCOL("_TtP14PallyConFPSSDK26PallyConFPSLicenseDelegate_")
@protocol PallyConFPSLicenseDelegate <NSObject>
/// Called when there is an success while acquiring license.
/// \param contentId ID of the content which needs the license
///
- (void)fpsLicenseDidSuccessAcquiringWithContentId:(NSString * _Nonnull)contentId;
/// Called when there is an error while acquiring license.
/// \param contentId ID of the content which needs the license
///
/// \param error Information of the error.
///
- (void)fpsLicenseWithContentId:(NSString * _Nonnull)contentId didFailWithError:(NSError * _Nonnull)error;
@end

@class PallyConTokenInfo;

/// A class that can create DownloadTask and acquire FPS license.
/// You need to set <code>SiteID</code>, <code>SiteKey</code> to create PallyConFPSSDK instance.
/// <code>PallyConFPSLicenseDelegate</code> is used to handle errors while acquiring license.
/// You must call the prepare method before playing the content, and you can obtain
/// the DownloadTask object through the createDownloadTask method to download the content.
SWIFT_CLASS("_TtC14PallyConFPSSDK14PallyConFPSSDK")
@interface PallyConFPSSDK : NSObject
/// Creates and initializes an PallyConFPSSDK.
/// Used when the siteID, siteKey issued by PallyCon is not needed.
/// <h3>Match the function below:</h3>
/// \code
/// public func prepare(urlAsset: AVURLAsset, contentId: String, licenseUrl: String, appleCertUrl: String)
/// public func createDownloadTask(url: URL, contentId: String, licenseUrl: String, appleCertUrl: String, downloadDelegate: PallyConFPSDownloadDelegate?) -> DownloadTask
///
/// \endcode<h3>The order of calling is as follows</h3>
/// \code
/// 1. public init(fpsLicenseDelegate: PallyConFPSLicenseDelegate?)
/// 2. public func prepare(urlAsset: AVURLAsset, contentId: String, licenseUrl: String, appleCertUrl: String)
/// or
/// 3. public func createDownloadTask(url: URL, contentName: String, contentId: String, licenseUrl: String, appleCertUrl: String) -> DownloadTask
///
/// \endcode<ul>
///   <li>
///     The matching function must be called.
///   </li>
///   <li>
///     Because they are functions used in the absence of site id, sitekey.
///   </li>
/// </ul>
/// \param fpsLicenseDelegate Delegate callback for license acquisition. It can be null if you don’t need the callback.
///
///
/// throws:
/// <code>PallyConSDKException.DatabaseProcessError</code> Occurs when there is an error while storing data in license Database.
- (nullable instancetype)initWithFpsLicenseDelegate:(id <PallyConFPSLicenseDelegate> _Nullable)fpsLicenseDelegate error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
/// Creates and initializes an PallyConFPSSDK.
/// \param siteId Site ID which is issued on PallyCon Admin site.
///
/// \param siteKey Site Key which is issued on PallyCon Admin site.
///
/// \param fpsLicenseDelegate Delegate callback for license acquisition. It can be null if you don’t need the callback.
///
///
/// throws:
/// <code>PallyConSDKException.DatabaseProcessError</code> Occurs when there is an error while storing data in license Database.
- (nullable instancetype)initWithSiteId:(NSString * _Nonnull)siteId siteKey:(NSString * _Nonnull)siteKey fpsLicenseDelegate:(id <PallyConFPSLicenseDelegate> _Nullable)fpsLicenseDelegate error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
/// Sets data required for license acquisition of FPS content. This method must be called to start playback.
/// note:
/// It must be executed before playback.
/// \param urlAsset <code>AVURLAsset</code> of the content to be played.
///
/// \param userId User ID of your content service who are using the service application.
///
/// \param contentId Unique ID of the content to be played.
///
/// \param optionalId ID of content purchase information. This parameter is optional.
///
/// \param liveKeyRotation True if the content to play is key rotation, false if not. default is false.
///
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId optionalId:(NSString * _Nonnull)optionalId liveKeyRotation:(BOOL)liveKeyRotation;
/// Sets data required for license acquisition of FPS content. This method must be called to start playback.
/// note:
/// It must be executed before playback.
/// \param urlAsset <code>AVURLAsset</code> of the content to be played.
///
/// \param userId User ID of your content service who are using the service application.
///
/// \param contentId Unique ID of the content to be played.
///
/// \param token <code>token</code> string of the content to be played.
///
/// \param liveKeyRotation True if the content to play is key rotation, false if not. default is false.
///
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId token:(NSString * _Nonnull)token liveKeyRotation:(BOOL)liveKeyRotation;
/// Sets data required for license acquisition of FPS content. This method must be called to start playback.
/// note:
/// It must be executed before playback.
/// \param urlAsset <code>AVURLAsset</code> of the content to be played.
///
/// \param contentId Unique ID of the content to be played.
///
/// \param licenseUrl License server URL.
///
/// \param appleCertUrl URL to receive the cert certificate issued by Apple.
///
/// \param liveKeyRotation True if the content to play is key rotation, false if not. default is false.
///
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset contentId:(NSString * _Nonnull)contentId licenseUrl:(NSString * _Nonnull)licenseUrl appleCertUrl:(NSString * _Nonnull)appleCertUrl liveKeyRotation:(BOOL)liveKeyRotation;
/// Sets data required for license acquisition of FPS content. This method must be called to start playback.
/// note:
/// It must be executed before playback.
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     urlAsset: <code>AVURLAsset</code> of the content to be played.
///   </li>
///   <li>
///     customData: <code>CustomData</code> of the content to be played.
///   </li>
/// </ul>
///
/// throws:
/// <code>PallyConSDKException.InvalidParameter</code> Occurs when parameter is missing or invlid.
- (BOOL)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset customData:(NSString * _Nonnull)customData error:(NSError * _Nullable * _Nullable)error;
/// Sets data required for license acquisition of FPS content. This method must be called to start playback.
/// note:
/// It must be executed before playback.
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     urlAsset: <code>AVURLAsset</code> of the content to be played.
///   </li>
///   <li>
///     customData: <code>CustomData</code> of the content to be played.
///   </li>
///   <li>
///     appleCertUrl: URL to receive the cert certificate issued by Apple.
///   </li>
/// </ul>
///
/// throws:
/// <code>PallyConSDKException.InvalidParameter</code> Occurs when parameter is missing or invlid.
- (BOOL)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset customData:(NSString * _Nonnull)customData appleCertUrl:(NSString * _Nonnull)appleCertUrl error:(NSError * _Nullable * _Nullable)error;
/// If you have an offline license, you will know the expiration date.
/// If there is a license, the expiration date is returned.
/// If not, the value of String() is returned.
/// note:
/// Only downloaded content can know the expiration date of this API.
/// The expiration date of streaming content is known through the <code>PallyConFPSLicenseDelegate</code> protocol when the license is successfully obtained.
/// \param contentId Unique ID of content to import expiration date.
///
///
/// throws:
/// <code>.DatabaseProcessError</code> Occurs when there is an error while removing licese from database.
- (NSString * _Nullable)getOfflineLicenseExpireDateWithContentId:(NSString * _Nonnull)contentId error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Removes a license from license database.
/// \param contentId Unique ID of content to remove its license.
///
///
/// throws:
/// <code>PallyConSDKException.DatabaseProcessError</code> Occurs when there is an error while removing licese from database.
- (BOOL)removeLicenseWithContentId:(NSString * _Nonnull)contentId error:(NSError * _Nullable * _Nullable)error;
/// Get a CustomData information from customData.
/// \param customData <code>CustomData</code> string of the content to be played.
///
///
/// throws:
/// <code>PallyConSDKException.InvalidParameter</code> Occurs when parameter is missing or invlid.
///
/// returns:
/// <code>PallyConCustomDataInfo</code> is customData information struct
- (PallyConCustomDataInfo * _Nullable)getCustomDataInfoFrom:(NSString * _Nonnull)customData error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Get a customData for play in chromcast.
/// \param userId User ID of your content service who are using the service application.
///
/// \param contentId Unique ID of the content to be played.
///
/// \param optionalId ID of content purchase information. This parameter is optional.
///
///
/// throws:
/// <code>PallyConSDKException.InternalException</code> Occurs when parsing failed.
///
/// returns:
/// customdata
- (id _Nullable)getCustomDataForChromcastWithUserId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId optionalId:(NSString * _Nonnull)optionalId error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Get a customData for play in chromcast.
/// \param token <code>token</code> string of the content to be played.
///
///
/// throws:
/// <code>PallyConSDKException.InternalException</code> Occurs when parsing failed.
///
/// returns:
/// customdata
- (id _Nullable)getCustomDataForChromcastWithToken:(NSString * _Nonnull)token SWIFT_WARN_UNUSED_RESULT;
/// Get a token information from token.
/// \param token <code>token</code> string of the content to be played.
///
///
/// throws:
/// <code>PallyConSDKException.InvalidParameter</code> Occurs when parameter is missing or invlid.
///
/// returns:
/// <code>PallyConTokenInfo</code> is token information struct
+ (PallyConTokenInfo * _Nullable)getTokenInfoFrom:(NSString * _Nonnull)token error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface PallyConFPSSDK (SWIFT_EXTENSION(PallyConFPSSDK))
/// Creates DownloadTask instance for content download.
/// \param url URL of content to be downloaded. (HLS m3u8 URL)
///
/// \param userId User ID of your content service who are using the service application.
///
/// \param contentId ID of content to be downloaded.
///
/// \param optionalId ID of content purchase information. This parameter is optional.
///
/// \param downloadOptions download the m3u8 bandwith(option).
/// You must enter a value greater than the bandwidth you want to download.
/// The default is to download the highest bandwidth.
///
/// \param isCelluraAccess Allow Cellura Access.
///
/// \param downloadDelegate Registers callback for download delegate. This callback is required to get content download status.
///
///
/// returns:
/// <code>DownloadTask</code> You can use this instance to download content.
- (DownloadTask * _Nonnull)createDownloadTaskWithUrl:(NSURL * _Nonnull)url userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId optionalId:(NSString * _Nonnull)optionalId downloadOptions:(NSString * _Nonnull)downloadOptions isCelluraAccess:(BOOL)isCelluraAccess downloadDelegate:(id <PallyConFPSDownloadDelegate> _Nullable)downloadDelegate SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Creates DownloadTask instance for content download.
/// \param url URL of content to be downloaded. (HLS m3u8 URL)
///
/// \param userId User ID of your content service who are using the service application.
///
/// \param contentId ID of content to be downloaded.
///
/// \param token token of content to be downloaded.
///
/// \param downloadOptions download the m3u8 bandwith(option).
/// You must enter a value greater than the bandwidth you want to download.
/// The default is to download the highest bandwidth.
///
/// \param isCelluraAccess Allow Cellura Access.
///
/// \param downloadDelegate Registers callback for download delegate. This callback is required to get content download status.
///
///
/// returns:
/// <code>DownloadTask</code> You can use this instance to download content.
- (DownloadTask * _Nonnull)createDownloadTaskWithUrl:(NSURL * _Nonnull)url userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId token:(NSString * _Nonnull)token downloadOptions:(NSString * _Nonnull)downloadOptions isCelluraAccess:(BOOL)isCelluraAccess downloadDelegate:(id <PallyConFPSDownloadDelegate> _Nullable)downloadDelegate SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Creates DownloadTask instance for content download.
/// This function is used to use the SDK without siteId, siteKey.
/// <h3>Used with the following functions:</h3>
/// \code
/// public init(fpsLicenseDelegate: PallyConFPSLicenseDelegate?)
/// public func prepare(urlAsset: AVURLAsset, contentId: String, licenseUrl: String, appleCertUrl: String)
///
/// \endcode\param url URL of content to be downloaded. (HLS m3u8 URL)
///
/// \param contentId ID of content to be downloaded.
///
/// \param licenseUrl License server URL.
///
/// \param appleCertUrl URL to receive the cert certificate issued by Apple.
///
/// \param downloadOptions download the m3u8 bandwith(option).
/// You must enter a value greater than the bandwidth you want to download.
/// The default is to download the highest bandwidth.
///
/// \param isCelluraAccess Allow Cellura Access.
///
/// \param downloadDelegate Registers callback for download delegate. This callback is required to get content download status.
///
///
/// returns:
/// <code>DownloadTask</code> You can use this instance to download content.
- (DownloadTask * _Nonnull)createDownloadTaskWithUrl:(NSURL * _Nonnull)url contentId:(NSString * _Nonnull)contentId licenseUrl:(NSString * _Nonnull)licenseUrl appleCertUrl:(NSString * _Nonnull)appleCertUrl downloadOptions:(NSString * _Nonnull)downloadOptions isCelluraAccess:(BOOL)isCelluraAccess downloadDelegate:(id <PallyConFPSDownloadDelegate> _Nullable)downloadDelegate SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
@end


/// Token string information struct
/// \code
/// public struct PallyConTokenInfo {
///     /// Contents ID
///     let contentId: String
///     /// Site ID
///     let siteId: String
///     /// DRM type
///     let drmType: DrmType
///     /// Token string
///     let token: String
/// }
///
/// \endcode
SWIFT_CLASS("_TtC14PallyConFPSSDK17PallyConTokenInfo")
@interface PallyConTokenInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
