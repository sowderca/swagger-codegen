#import <Foundation/Foundation.h>
#import "SWGUser.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGUserApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGUserApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGUserApi*) sharedAPI;
///
///
/// Create user
/// This can only be done by the logged in user.
///
/// @param body Created user object (optional)
/// 
///
/// @return 
-(NSNumber*) createUserWithBody: (SWGUser*) body
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// Creates list of users with given input array
/// 
///
/// @param body List of user object (optional)
/// 
///
/// @return 
-(NSNumber*) createUsersWithArrayInputWithBody: (NSArray<SWGUser>*) body
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// Creates list of users with given input array
/// 
///
/// @param body List of user object (optional)
/// 
///
/// @return 
-(NSNumber*) createUsersWithListInputWithBody: (NSArray<SWGUser>*) body
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// Delete user
/// This can only be done by the logged in user.
///
/// @param username The name that needs to be deleted
/// 
///
/// @return 
-(NSNumber*) deleteUserWithUsername: (NSString*) username
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// Get user by user name
/// 
///
/// @param username The name that needs to be fetched. Use user1 for testing. 
/// 
///
/// @return SWGUser*
-(NSNumber*) getUserByNameWithUsername: (NSString*) username
    completionHandler: (void (^)(SWGUser* output, NSError* error)) handler;


///
///
/// Logs user into the system
/// 
///
/// @param username The user name for login (optional)
/// @param password The password for login in clear text (optional)
/// 
///
/// @return NSString*
-(NSNumber*) loginUserWithUsername: (NSString*) username
    password: (NSString*) password
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// Logs out current logged in user session
/// 
///
/// 
///
/// @return 
-(NSNumber*) logoutUserWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


///
///
/// Updated user
/// This can only be done by the logged in user.
///
/// @param username name that need to be deleted
/// @param body Updated user object (optional)
/// 
///
/// @return 
-(NSNumber*) updateUserWithUsername: (NSString*) username
    body: (SWGUser*) body
    completionHandler: (void (^)(NSError* error)) handler;



@end